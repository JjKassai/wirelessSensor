<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="7.7.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="wirelessSensor">
<packages>
<package name="DMB0006A">
<smd name="1" x="-1.399996875" y="0.999996875" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="2" x="-1.399996875" y="0" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="3" x="-1.399996875" y="-0.999996875" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="4" x="1.399996875" y="-0.999996875" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="5" x="1.399996875" y="0" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="6" x="1.399996875" y="0.999996875" dx="0.6096" dy="0.4064" layer="1"/>
<smd name="7" x="0" y="0" dx="1.4986" dy="2.3876" layer="1"/>
<smd name="V" x="-0.5" y="0" dx="0.508" dy="0.508" layer="1" roundness="100"/>
<wire x1="-1.524" y1="-1.524" x2="1.524" y2="-1.524" width="0.1524" layer="25"/>
<wire x1="-1.524" y1="1.524" x2="1.524" y2="1.524" width="0.1524" layer="25"/>
<wire x1="1.524" y1="-1.524" x2="1.524" y2="1.524" width="0.1524" layer="25"/>
<wire x1="-1.524" y1="-1.524" x2="-1.524" y2="1.524" width="0.1524" layer="25"/>
<wire x1="-0.7112" y1="0.889" x2="-1.0922" y2="0.889" width="0.1524" layer="25" curve="-180"/>
<wire x1="-1.0922" y1="0.889" x2="-0.7112" y2="0.889" width="0.1524" layer="25" curve="-180"/>
<text x="-1.3462" y="-1.0414" size="1.27" layer="25" ratio="6" rot="SR0">.Designator</text>
<text x="-2.8702" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;NAME</text>
<wire x1="-0.6858" y1="0.1016" x2="0.6858" y2="0.1016" width="0.1524" layer="31"/>
<wire x1="0.6858" y1="0.1016" x2="0.6858" y2="1.1684" width="0.1524" layer="31"/>
<wire x1="0.6858" y1="1.1684" x2="-0.6858" y2="1.1684" width="0.1524" layer="31"/>
<wire x1="-0.6858" y1="1.1684" x2="-0.6858" y2="0.1016" width="0.1524" layer="31"/>
<wire x1="-0.6858" y1="-1.1684" x2="0.6858" y2="-1.1684" width="0.1524" layer="31"/>
<wire x1="0.6858" y1="-1.1684" x2="0.6858" y2="-0.1016" width="0.1524" layer="31"/>
<wire x1="0.6858" y1="-0.1016" x2="-0.6858" y2="-0.1016" width="0.1524" layer="31"/>
<wire x1="-0.6858" y1="-0.1016" x2="-0.6858" y2="-1.1684" width="0.1524" layer="31"/>
<wire x1="-1.5494" y1="1.5494" x2="-0.7874" y2="1.5494" width="0.1524" layer="51"/>
<wire x1="-0.7874" y1="1.5494" x2="-0.7874" y2="1.7526" width="0.1524" layer="51"/>
<wire x1="-0.7874" y1="1.7526" x2="-1.5494" y2="1.7526" width="0.1524" layer="51"/>
<wire x1="-1.5494" y1="1.7526" x2="-1.5494" y2="1.5494" width="0.1524" layer="51"/>
<wire x1="1.1938" y1="1.5494" x2="1.5494" y2="1.5494" width="0.1524" layer="51"/>
<wire x1="1.5494" y1="1.5494" x2="1.5494" y2="1.7526" width="0.1524" layer="51"/>
<wire x1="1.5494" y1="1.7526" x2="1.1938" y2="1.7526" width="0.1524" layer="51"/>
<wire x1="1.1938" y1="1.7526" x2="1.1938" y2="1.5494" width="0.1524" layer="51"/>
<wire x1="1.1938" y1="-1.7526" x2="1.5494" y2="-1.7526" width="0.1524" layer="51"/>
<wire x1="1.5494" y1="-1.7526" x2="1.5494" y2="-1.5494" width="0.1524" layer="51"/>
<wire x1="1.5494" y1="-1.5494" x2="1.1938" y2="-1.5494" width="0.1524" layer="51"/>
<wire x1="1.1938" y1="-1.5494" x2="1.1938" y2="-1.7526" width="0.1524" layer="51"/>
<wire x1="-1.5494" y1="-1.7526" x2="-1.1938" y2="-1.7526" width="0.1524" layer="51"/>
<wire x1="-1.1938" y1="-1.7526" x2="-1.1938" y2="-1.5494" width="0.1524" layer="51"/>
<wire x1="-1.1938" y1="-1.5494" x2="-1.5494" y2="-1.5494" width="0.1524" layer="51"/>
<wire x1="-1.5494" y1="-1.5494" x2="-1.5494" y2="-1.7526" width="0.1524" layer="51"/>
<text x="-1.5748" y="2.1336" size="1.27" layer="51" ratio="6" rot="SR0">Designator9</text>
<text x="-3.4544" y="-0.635" size="1.27" layer="27" ratio="6" rot="SR0">&gt;VALUE</text>
</package>
<package name="SOIC14-N_MC">
<smd name="1" x="-2.3622" y="3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="2" x="-2.3622" y="2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="3" x="-2.3622" y="1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="4" x="-2.3622" y="0" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="5" x="-2.3622" y="-1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="6" x="-2.3622" y="-2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="7" x="-2.3622" y="-3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="8" x="2.3622" y="-3.81" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="9" x="2.3622" y="-2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="10" x="2.3622" y="-1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="11" x="2.3622" y="0" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="12" x="2.3622" y="1.27" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="13" x="2.3622" y="2.54" dx="1.9812" dy="0.5588" layer="1"/>
<smd name="14" x="2.3622" y="3.81" dx="1.9812" dy="0.5588" layer="1"/>
<wire x1="-1.9558" y1="3.556" x2="-1.9558" y2="4.064" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="4.064" x2="-2.9972" y2="4.064" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="4.064" x2="-2.9972" y2="3.556" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="3.556" x2="-1.9558" y2="3.556" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="2.286" x2="-1.9558" y2="2.794" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="2.794" x2="-2.9972" y2="2.794" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="2.794" x2="-2.9972" y2="2.286" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="2.286" x2="-1.9558" y2="2.286" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="1.016" x2="-1.9558" y2="1.524" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="1.524" x2="-2.9972" y2="1.524" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="1.524" x2="-2.9972" y2="1.016" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="1.016" x2="-1.9558" y2="1.016" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-0.254" x2="-1.9558" y2="0.254" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="0.254" x2="-2.9972" y2="0.254" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="0.254" x2="-2.9972" y2="-0.254" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-0.254" x2="-1.9558" y2="-0.254" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-1.524" x2="-1.9558" y2="-1.016" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-1.016" x2="-2.9972" y2="-1.016" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-1.016" x2="-2.9972" y2="-1.524" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-1.524" x2="-1.9558" y2="-1.524" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-2.794" x2="-1.9558" y2="-2.286" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-2.286" x2="-2.9972" y2="-2.286" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-2.286" x2="-2.9972" y2="-2.794" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-2.794" x2="-1.9558" y2="-2.794" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-4.064" x2="-1.9558" y2="-3.556" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-3.556" x2="-2.9972" y2="-3.556" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-3.556" x2="-2.9972" y2="-4.064" width="0.1524" layer="25"/>
<wire x1="-2.9972" y1="-4.064" x2="-1.9558" y2="-4.064" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-3.556" x2="1.9558" y2="-4.064" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-4.064" x2="2.9972" y2="-4.064" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-4.064" x2="2.9972" y2="-3.556" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-3.556" x2="1.9558" y2="-3.556" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-2.286" x2="1.9558" y2="-2.794" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-2.794" x2="2.9972" y2="-2.794" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-2.794" x2="2.9972" y2="-2.286" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-2.286" x2="1.9558" y2="-2.286" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-1.016" x2="1.9558" y2="-1.524" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-1.524" x2="2.9972" y2="-1.524" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-1.524" x2="2.9972" y2="-1.016" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-1.016" x2="1.9558" y2="-1.016" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="0.254" x2="1.9558" y2="-0.254" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-0.254" x2="2.9972" y2="-0.254" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="-0.254" x2="2.9972" y2="0.254" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="0.254" x2="1.9558" y2="0.254" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="1.524" x2="1.9558" y2="1.016" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="1.016" x2="2.9972" y2="1.016" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="1.016" x2="2.9972" y2="1.524" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="1.524" x2="1.9558" y2="1.524" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="2.794" x2="1.9558" y2="2.286" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="2.286" x2="2.9972" y2="2.286" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="2.286" x2="2.9972" y2="2.794" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="2.794" x2="1.9558" y2="2.794" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="4.064" x2="1.9558" y2="3.556" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="3.556" x2="2.9972" y2="3.556" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="3.556" x2="2.9972" y2="4.064" width="0.1524" layer="25"/>
<wire x1="2.9972" y1="4.064" x2="1.9558" y2="4.064" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="-4.318" x2="1.9558" y2="-4.318" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="-4.318" x2="1.9558" y2="4.318" width="0.1524" layer="25"/>
<wire x1="1.9558" y1="4.318" x2="-0.3048" y2="4.318" width="0.1524" layer="25"/>
<wire x1="-0.3048" y1="4.318" x2="-1.9558" y2="4.318" width="0.1524" layer="25"/>
<wire x1="-1.9558" y1="4.318" x2="-1.9558" y2="-4.318" width="0.1524" layer="25"/>
<wire x1="0.3048" y1="4.3434" x2="-0.3048" y2="4.318" width="0" layer="25" curve="-180"/>
<text x="-3.2004" y="3.7084" size="1.27" layer="25" ratio="6" rot="SR0">*</text>
<text x="-2.8702" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;NAME</text>
<wire x1="-1.143" y1="-4.318" x2="1.143" y2="-4.318" width="0.1524" layer="51"/>
<wire x1="1.143" y1="4.318" x2="-0.3048" y2="4.318" width="0.1524" layer="51"/>
<wire x1="-0.3048" y1="4.318" x2="-1.143" y2="4.318" width="0.1524" layer="51"/>
<wire x1="0.3048" y1="4.3434" x2="-0.3048" y2="4.318" width="0" layer="51" curve="-180"/>
<wire x1="3.8608" y1="-1.0668" x2="3.8608" y2="-1.4732" width="0.1524" layer="51"/>
<wire x1="3.8608" y1="-1.4732" x2="3.6068" y2="-1.4732" width="0.1524" layer="51"/>
<wire x1="3.6068" y1="-1.4732" x2="3.6068" y2="-1.0668" width="0.1524" layer="51"/>
<wire x1="3.6068" y1="-1.0668" x2="3.8608" y2="-1.0668" width="0.1524" layer="51"/>
<text x="-3.2004" y="3.7084" size="1.27" layer="51" ratio="6" rot="SR0">*</text>
<text x="-3.4544" y="-0.635" size="1.27" layer="27" ratio="6" rot="SR0">&gt;VALUE</text>
</package>
</packages>
<symbols>
<symbol name="HDC1080DMB">
<pin name="SDA" x="17.78" y="2.54" length="middle" rot="R180"/>
<pin name="GND" x="17.78" y="-7.62" length="middle" direction="pwr" rot="R180"/>
<pin name="NC_2" x="-17.78" y="-5.08" length="middle" direction="pas"/>
<pin name="NC" x="-17.78" y="-7.62" length="middle" direction="pas"/>
<pin name="VDD" x="-17.78" y="5.08" length="middle" direction="pwr"/>
<pin name="SCL" x="17.78" y="5.08" length="middle" direction="oc" rot="R180"/>
<pin name="PAD" x="17.78" y="-2.54" length="middle" direction="pwr" rot="R180"/>
<wire x1="-12.7" y1="-10.16" x2="12.7" y2="-10.16" width="0.2032" layer="94"/>
<wire x1="12.7" y1="-10.16" x2="12.7" y2="10.16" width="0.2032" layer="94"/>
<wire x1="12.7" y1="10.16" x2="-12.7" y2="10.16" width="0.2032" layer="94"/>
<wire x1="-12.7" y1="10.16" x2="-12.7" y2="-10.16" width="0.2032" layer="94"/>
<text x="-4.7244" y="1.4986" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;NAME</text>
<text x="-5.6642" y="-1.0414" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;VALUE</text>
</symbol>
<symbol name="PIC16F1823-X_SL">
<pin name="VDD" x="-63.5" y="7.62" direction="pwr"/>
<pin name="T1CKI/T1OSI/OSC1/CLKIN/RA5" x="-63.5" y="5.08"/>
<pin name="T1G/SDO/CLKR/T1OSO/CLKOUT/OSC2/CPS3/AN3/RA4" x="-63.5" y="2.54"/>
<pin name="*MCLR/VPP/T1G/*SS/RA3" x="-63.5" y="0"/>
<pin name="MDCIN2/RX/DT/CCP1/P1A/RC5" x="-63.5" y="-2.54"/>
<pin name="MDOUT/TX/CK/P1B/SRNQ/C2OUT/RC4" x="-63.5" y="-5.08"/>
<pin name="MDMIN/*SS/P1C/C12IN3-/CPS7/AN7/RC3" x="-63.5" y="-7.62"/>
<pin name="RC2/AN6/CPS6/C12IN2-/P1D/SDO/MDCIN1" x="63.5" y="-7.62" rot="R180"/>
<pin name="RC1/AN5/CPS5/C12IN1-/SDA/SDI" x="63.5" y="-5.08" rot="R180"/>
<pin name="RC0/AN4/CPS4/C2IN+/SCL/SCK" x="63.5" y="-2.54" rot="R180"/>
<pin name="RA2/AN2/CPS2/T0CKI/INT/C1OUT/SRQ/FLT0" x="63.5" y="0" rot="R180"/>
<pin name="RA1/AN1/CPS1/C12IN0-/VREF/SRI/RX/DT/ICSPCLK" x="63.5" y="2.54" rot="R180"/>
<pin name="RA0/AN0/CPS0/C1IN+/DACOUT/TX/CK/ICSPDAT/ICDDAT" x="63.5" y="5.08" rot="R180"/>
<pin name="VSS" x="63.5" y="7.62" direction="pwr" rot="R180"/>
<wire x1="-55.88" y1="12.7" x2="-55.88" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="-55.88" y1="-12.7" x2="55.88" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="55.88" y1="-12.7" x2="55.88" y2="12.7" width="0.1524" layer="94"/>
<wire x1="55.88" y1="12.7" x2="-55.88" y2="12.7" width="0.1524" layer="94"/>
<text x="-7.2644" y="16.7386" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;NAME</text>
<text x="-8.2042" y="14.1986" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;VALUE</text>
</symbol>
</symbols>
<devicesets>
<deviceset name="HDC1080DMBR" prefix="U">
<gates>
<gate name="A" symbol="HDC1080DMB" x="0" y="0"/>
</gates>
<devices>
<device name="" package="DMB0006A">
<connects>
<connect gate="A" pin="GND" pad="2"/>
<connect gate="A" pin="NC" pad="4"/>
<connect gate="A" pin="NC_2" pad="3"/>
<connect gate="A" pin="PAD" pad="7"/>
<connect gate="A" pin="SCL" pad="6"/>
<connect gate="A" pin="SDA" pad="1"/>
<connect gate="A" pin="VDD" pad="5"/>
</connects>
<technologies>
<technology name="">
<attribute name="ALTERNATEPARTNUMBER" value="HDC1080DMBT" constant="no"/>
<attribute name="APPLICATION_BUILDNUMBER" value="*" constant="no"/>
<attribute name="COMPTYPE" value="IC" constant="no"/>
<attribute name="MANUFACTURER" value="Texas Instruments" constant="no"/>
<attribute name="MOUNTTYPE" value="SMT" constant="no"/>
<attribute name="PACKAGEREFERENCE" value="DMB0006A" constant="no"/>
<attribute name="PARTNUMBER" value="HDC1080DMBR" constant="no"/>
<attribute name="PIN_COUNT" value="7" constant="no"/>
<attribute name="REFDES" value="RefDes" constant="no"/>
<attribute name="TYPE" value="TYPE" constant="no"/>
<attribute name="VALUE" value="Value" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="PIC16F1823-X_SL" prefix="U">
<gates>
<gate name="A" symbol="PIC16F1823-X_SL" x="0" y="0"/>
</gates>
<devices>
<device name="" package="SOIC14-N_MC">
<connects>
<connect gate="A" pin="*MCLR/VPP/T1G/*SS/RA3" pad="4"/>
<connect gate="A" pin="MDCIN2/RX/DT/CCP1/P1A/RC5" pad="5"/>
<connect gate="A" pin="MDMIN/*SS/P1C/C12IN3-/CPS7/AN7/RC3" pad="7"/>
<connect gate="A" pin="MDOUT/TX/CK/P1B/SRNQ/C2OUT/RC4" pad="6"/>
<connect gate="A" pin="RA0/AN0/CPS0/C1IN+/DACOUT/TX/CK/ICSPDAT/ICDDAT" pad="13"/>
<connect gate="A" pin="RA1/AN1/CPS1/C12IN0-/VREF/SRI/RX/DT/ICSPCLK" pad="12"/>
<connect gate="A" pin="RA2/AN2/CPS2/T0CKI/INT/C1OUT/SRQ/FLT0" pad="11"/>
<connect gate="A" pin="RC0/AN4/CPS4/C2IN+/SCL/SCK" pad="10"/>
<connect gate="A" pin="RC1/AN5/CPS5/C12IN1-/SDA/SDI" pad="9"/>
<connect gate="A" pin="RC2/AN6/CPS6/C12IN2-/P1D/SDO/MDCIN1" pad="8"/>
<connect gate="A" pin="T1CKI/T1OSI/OSC1/CLKIN/RA5" pad="2"/>
<connect gate="A" pin="T1G/SDO/CLKR/T1OSO/CLKOUT/OSC2/CPS3/AN3/RA4" pad="3"/>
<connect gate="A" pin="VDD" pad="1"/>
<connect gate="A" pin="VSS" pad="14"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U1" library="wirelessSensor" deviceset="HDC1080DMBR" device="" value="HDC1080"/>
<part name="U2" library="wirelessSensor" deviceset="PIC16F1823-X_SL" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U1" gate="A" x="0" y="27.94"/>
<instance part="U2" gate="A" x="0" y="-5.08"/>
</instances>
<busses>
</busses>
<nets>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
