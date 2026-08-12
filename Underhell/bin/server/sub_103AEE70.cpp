int __thiscall sub_103AEE70(int this)
{
  int result; // eax
  double v3; // st7

  result = sub_100B8E40((float *)(this + 3936));
  if ( (_BYTE)result )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Strider.Hunt", 0.0, 0);
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           8.0,
           12.0);
    result = dword_106B31C8;
    *(float *)(this + 3908) = v3 + *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
