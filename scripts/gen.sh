ARGS=("$@")
for i in "${ARGS[@]}"
do
    touch $i.cc && cp ~/CARRIER_BUNDLE/cp/library/template.cc $i.cc
    code $i.cc
done
