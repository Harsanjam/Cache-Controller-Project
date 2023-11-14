<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <blockdef name="SDRAM">
            <timestamp>2023-10-30T1:56:49</timestamp>
            <rect width="400" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="464" y="-300" height="24" />
            <line x2="528" y1="-288" y2="-288" x1="464" />
        </blockdef>
        <blockdef name="SRAM">
            <timestamp>2023-10-30T1:54:13</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
        </blockdef>
        <block symbolname="SDRAM" name="XLXI_1">
            <blockpin name="clk" />
            <blockpin name="SDRAM_rw" />
            <blockpin name="SDRAM_memstrb" />
            <blockpin name="SDRAM_addr(15:0)" />
            <blockpin name="SDRAM_din(7:0)" />
            <blockpin name="SDRAM_dout(7:0)" />
        </block>
        <block symbolname="SRAM" name="XLXI_2">
            <blockpin name="clka" />
            <blockpin name="wea(0:0)" />
            <blockpin name="addra(7:0)" />
            <blockpin name="dina(7:0)" />
            <blockpin name="douta(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1056" y="1440" name="XLXI_1" orien="R0">
        </instance>
        <instance x="2384" y="1376" name="XLXI_2" orien="R0">
        </instance>
    </sheet>
</drawing>