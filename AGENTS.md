# AGENTS.md

Working agreement for AI assistance in this repository.

LF11b — Betrieb und Sicherheit vernetzter Systeme gewährleisten.
Fachinformatiker Systemintegration, third year of training.

## Resource Principles

My working time and token usage are the scarcest resources in this
collaboration. Priority order:

1. My working time
2. Token usage
3. Time until the next visible progress update

- **No scope creep.** Do only what was commissioned. Do not pre-research what
  might be needed later, however likely it seems.
- **One subagent per parallelisable task.** Never more. Do it myself if a few
  lookups suffice. Every subagent must be created as a visible task first.
- **Plan before building.** Verify the planned approach actually solves the
  task. Cut unnecessary steps before spending time on them.
- **Compress results.** Never output raw research. Tables over prose, findings
  over recommendations. "Not found" is a complete result, reported in one
  sentence.
- **Ask when genuinely unclear.** Act when clear. Ask when a translation, a
  requirement or a decision is ambiguous or hard to reverse. Questions outside
  the current task are collected and raised later, never blocking.
- **Announce before non-trivial work.** One sentence on what I am doing and
  why. Skip this for trivial steps.
- **Flag unexpected state changes.** Tell me when repository state changes in
  ways I did not cause, for example an edited `.gitignore`.

## Your Rules

- `AGENTS.md` is the only file I may write without being asked.
- `AGENTS.md` holds two kinds of content. Rules are binding and need our
  agreement. Notes are supporting material such as tool hints and pointers to
  data. I may add a note on my own initiative as long as I show you the diff
  clearly; a rule always waits for your approval.
- One-time grants never go into this file, whatever they are worded like. They
  authorise one commissioned task and expire as soon as that task is done, in
  any case no later than the commit that carries it. The grant is recorded in
  that commit, not here. If a grant should become permanent, I propose a
  standing rule and let you decide.
- A grant I act on names the task, what it allows and what ends it. If one of
  the three is missing, the grant is invalid and I ask. A permission whose
  expiry depends on my own judgement is never valid.
- When two rules in this file conflict, I name the conflict and ask how to
  resolve it, instead of resolving it on my own initiative.
- Plan mode is read-only. Execution happens only in build mode and always on
  your explicit instruction. Return to plan mode as soon as the agreed task is
  done.
- Plan before every build. Grill unclear decisions first. Execute only what was
  agreed, nothing more.
- Work with minimum privileges.
- Explain why a command needs permission before requesting it. Prefer read-only
  alternatives. Never combine unrelated write operations in one command. Never
  use a relative `cd`, especially not `cd ..`, to reach a working directory.
  Use absolute paths or the workdir parameter so the scope is obvious.
- `main` and `dev` belong to you. No checkout, no commit, no merge, no push.
- Every write task gets its own feature branch and its own clone under `./.tmp/`.
  Independent tasks branch from `main`. Sequentially dependent tasks may chain
  from the previous successful branch, so that only the last branch needs
  merging. Any other branching from a feature branch needs your explicit
  consent. Exception: minimal diffs that are trivial to review may go straight
  into `main`, unstaged, and only where you explicitly request a one-time
  exception for that case. I never request one myself and never consider a diff
  eligible on my own initiative. `AGENTS.md` always qualifies.
- Put a rule into this file as soon as we agree on it, unstaged. Staging is
  yours.
- Publish a link only after you have checked it yourself. Everything else stays
  an HTML comment in the source, ready for a later review.
- Committing on the task's own feature branch is expected once the work is
  done. Never merge, push, amend existing history, or change branches on my
  own initiative.
- Existing repository content is assumed correct until you commission a check.
  A systematic proofread is not implied by this rule.
- Mark every source as verified or unconfirmed. In content that is published
  as an mdBook, use verified sources only.
- Correctness before scope. No filler, no padding, no speculation dressed up
  as content.

## Baseline Rules

Derived from this repository. Adjustable later.

- Write correct German for public content. Technical terms bilingual: the
  English term used in practice plus the German term used in IHK exams. For
  example *Schutzbedarfsfeststellung* / *protection need assessment*.
- Follow repository conventions: Mermaid for diagrams, blockquotes instead of
  admonitions, `bash` or `samp` for code, sources cited with publisher and
  version.
- No comments inside exercise snippets.
- Announce the diff scope before substantial content changes.
- Before every commit on a feature branch, verify that the new content is
  correct, especially technical terms, figures, version numbers and legal
  references.
- Prefer concise answers over complete ones. Say what is needed, then stop.
- Keep me focused. Do not widen the topic, add unrequested context, or repeat
  what I already know.
- Do not be patronising. Applies to proposals as well as to text for students.
- Source lists in `src/quellen.md` live as HTML comments. One entry is
  published by removing only its comment markers, its metadata stays a comment.

## Path Rules

- `./.tmp/` is scratch space for feature branch clones and for cached source
  files. Never treat it as project content.
- `book/` is generated output. Never edit it by hand.
- `src/` is the mdBook source. `src/SUMMARY.md` defines the navigation and is
  the only place that determines which pages are published.
- Local clones are shallow by default. Use `file://` if a shallow clone is
  genuinely needed, since `--depth` is ignored for local clones.
- After adding a git remote, run `git fetch` before expecting any
  remote-tracking branch to exist.
- A merge is verified when the intended file content is present in `main`, not
  when the original commit SHA is reproduced.

## Notes

- Read a PDF without storing it. Pipe it through the text extractor and read from
  stdout: `curl -sL URL | pdftotext -layout - -`. The `-layout` switch preserves
  table columns. The `#ai` development shell provides `pdftotext`.
- When a document or file is needed more than once, cache it under
  `./.tmp/.cache/` and read it from there. Keep the original file name, because
  the source citation depends on it.
- I decide per case between piping and caching. I cache when a second pass over
  the same document is likely, when the file is large, or when several tasks need
  it. I pipe when a single pass suffices.