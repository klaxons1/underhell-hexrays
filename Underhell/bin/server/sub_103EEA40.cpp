int __usercall sub_103EEA40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_10154360((int)"vgui/screens/radar");
  sub_10154360((int)"engine/writez");
  sub_100E8220(a2, off_1068346C);
  sub_1023B8B0("JNK_Radar_Ping_Friendly");
  sub_1023B8B0("Physics.WaterSplash");
  sub_101543E0((int)"WheelDust");
  sub_101543E0((int)"WheelSplash");
  return sub_103EA350(a1, a2);
}
