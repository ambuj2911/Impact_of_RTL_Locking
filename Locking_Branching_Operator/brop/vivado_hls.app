<project xmlns="com.autoesl.autopilot.project" top="sha256" name="brop">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="101 3">
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../sha256_tb.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="sha256_impl_tb.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="sha256_impl.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="sha256.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

