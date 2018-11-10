# About this Hunspell fork

I'm not entirely happy with Hunspell, and seeing the direction original developers took, I decided to fix any issues I can spot and keep them here for future reference and for others to use. I also cross-port or implement functionality I need. 

New functionality include:
 - BDIC (binary dictionary) support. These are used by Google products (or derived from them) and offer much lower memory (both disk and RAM) consumption and load much faster.
 
Fixes so far include:

 - reduced storage consumption by 116KB and RAM consumption by 320KB by using towupper/towlower/iswalpha instead of using static tables for unicode character case info.
 - reduced storage consumption by 16KB by removing useless exports (classes that are unusable outside of compiler that generated them and seemingly private functions).
 - reduced storage consumption by 4KB by discarding Hunzip functionality that probably nobody knows it's there - most projects use usual dic+aff file pairs, some use BDIC format.

For original readme, see [Original repo](https://github.com/hunspell/hunspell).