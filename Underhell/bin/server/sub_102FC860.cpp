void __thiscall sub_102FC860(int this, int a2)
{
  sub_100577F0(this + 3700, a2, 0);
  if ( a2 )
    *(_DWORD *)(this + 4100) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 4100) = -1;
  *(float *)(this + 4076) = *(float *)(dword_106B31C8 + 12) + 5.0;
  sub_10023CB0((char *)this, 77);
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4068) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Antlion.Distracted", 0.0, 0);
    *(float *)(this + 4068) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
