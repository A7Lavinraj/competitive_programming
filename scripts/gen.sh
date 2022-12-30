ARGS=("$@")
for i in "${ARGS[@]}"
do
    touch $i.cc && cp ~/CAREER_BUNDLE/cp/library/template.cc $i.cc
    subl $i.cc
done
