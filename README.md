# Zig2

## About
Zig2 is a programming language born from the ideas of the Zig programming language, but its main goals are maximum compilation speed, absolute cross-platform compatibility, and an extremely slow rate of adding new keywords (limited to at most 1 word per standard version).

## How it achieves maximum compilation speed
* **There is NO compiler:** Zig2 is not a compiler; it is a fast translator to the C programming language. It completely cuts out the heavy compiler backend and reuses existing tools (`tcc` for metaprogramming, `gcc`/`clang` for optimization, and `mold` for parallel linking).
* **There are NO macros:** All C preprocessor macros are eliminated. They are replaced by `comptime_<N>` blocks (like in Zig), meaning that this specific action will be executed during the $N$-th compiler pass.
* **Strict Syntax Discipline:** Exactly one keyword can be added per standard version. Keywords are permanent and can never be deleted from the standard. To lock a file to a specific version, use the `-std=zig2_<number>` flag.
* **Optimization by Omission:** To tell the translator that a certain keyword doesn't need to be processed in a file, you can use the special `-without <keyword>` flag. The translator will completely ignore it, saving memory and compilation time.
* **Guaranteed Portability by Default:** All code is strictly translated under the assumption that it is 100% standard and portable. There is a special instrument to check this. 
* **Explicit Non-Portable Escape Hatch:** If you want to use unstandard/non-portable code, you must explicitly add the `_UnPortable` suffix to your standard flag (e.g., `-std=zig2_v1_UnPortable`). This choice will be permanently written into the object file's ABI.
* **C-Based Foundation:** The baseline standard and syntax are fully derived from the clean C programming language.
