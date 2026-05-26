
# Zig2
# en
**About**
Zig2 is a programming language that was born on the basis of the idea of ​​the Zig programming language, but the main goal of which is the speed of compilation, absolute cross-platform compatibility and minimal speed of adding new keywords (added at the rate of 1 word per 1 standard).
**How does it take the max speed compilation**
*Main ideas*:
- There isn't compiler. It's translator to C programming languages, and get macroses to do the compiler passes.
- There isn't any macroses. All macroses turn into *comptime_<N>*, like in Zig programming language, that meaning this action will do in the N compiller pass.
- There adding one keyword per standard. There notime, when does the keyword deleted from the standard. To set standard, you need to use the special compile flag *std*, with the value like *zig2_<number_of_standard>*
- To set that some word doesn't need to be transalted, you can use the special compiler flag *without*
- The all code translate with the assumption that all code is in standard. There is special instrument to check it. If you want to use unstandard code, you need to added the *unstanderd* flag in the standard value. It will be writed on ABI.
- The base standard it get by C language.
