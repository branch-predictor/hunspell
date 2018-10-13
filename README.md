# About this Hunspell fork

I'm not entirely happy with Hunspell, and seeing the direction original developers took, I decided to fix any issues I can spot and keep them here for future reference and for others to use.
Fixes so far include:

 - reduced storage consumption by 116KB and RAM consumption by 320KB by using towupper/towlower/iswalpha instead of using static tables for unicode character case info.

For original readme, see [Original repo](https://github.com/hunspell/hunspell).