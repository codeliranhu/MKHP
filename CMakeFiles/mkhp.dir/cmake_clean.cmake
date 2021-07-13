file(REMOVE_RECURSE
  "mkhp.pdb"
  "mkhp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/mkhp.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
