int __thiscall sub_101CB340(int this)
{
  int result; // eax
  bool v3; // zf
  int v4; // ecx
  double v5; // st7
  int v6; // ebx
  _DWORD *v7; // edi
  int v8; // edi
  double ArgList; // [esp+0h] [ebp-228h]
  float v10; // [esp+10h] [ebp-218h]
  char Buffer[512]; // [esp+20h] [ebp-208h] BYREF
  int v12; // [esp+220h] [ebp-8h]
  float v13; // [esp+224h] [ebp-4h]

  result = sub_100C0140(this);
  v3 = (*(_BYTE *)(this + 236) & 1) == 0;
  v12 = result;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(this + 1132);
    if ( v4 )
    {
      v5 = 0.0;
      v6 = 0;
      v13 = 0.0;
      if ( v4 > 0 )
      {
        v7 = (_DWORD *)(this + 1156);
        do
        {
          if ( *v7 )
          {
            v5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v7 + 116))(*v7) + v13;
            v13 = v5;
          }
          ++v6;
          v7 += 6;
        }
        while ( v6 < *(_DWORD *)(this + 1132) );
      }
      v10 = v5;
      sub_10215420(v10);
      ArgList = v13;
      sub_10429A00(Buffer, 0x200u, "Mass: %.2f kg / %.2f lb (%s)", SLOBYTE(ArgList));
      v8 = v12;
      sub_100D5DE0((_DWORD *)this, v12, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v8 + 1;
    }
  }
  return result;
}
