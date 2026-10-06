{
  description = "Unterrichtsnotizen";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-26.05";
  };

  outputs = { self, nixpkgs, ... }:
  let
    system = "x86_64-linux";
    pkgs = import nixpkgs {inherit system;};
  in {

    legacyPackages.${system} = { inherit pkgs; };

    devShells.${system} = {
      ci = pkgs.mkShell {
        nativeBuildInputs = with pkgs; [ mdbook mdbook-mermaid ];
        shellHook = ''
          mdbook-mermaid install
          mdbook build
          touch book/.nojekyll
          exit
        '';
      };
      default = pkgs.mkShell {
        nativeBuildInputs = with pkgs; [ mdbook mdbook-mermaid ];
        shellHook = ''
          mdbook-mermaid install
          mdbook serve --port 3333 --open
          exit
        '';
      };
      ai = pkgs.mkShell {
        nativeBuildInputs = with pkgs; [ poppler-utils jq ripgrep ];
      };
    };
  };
}
