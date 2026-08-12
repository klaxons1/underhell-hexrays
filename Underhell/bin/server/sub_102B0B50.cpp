void __usercall sub_102B0B50(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  int v4; // eax
  float v5; // [esp+0h] [ebp-10h]

  v3 = sub_100D1940((_DWORD *)a1);
  if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    v3 = 0;
  if ( !*(_BYTE *)(a1 + 1127) && (!*(_DWORD *)(dword_106BB604 + 48) || *(float *)(v3 + 5084) >= 15.0) )
  {
    v4 = sub_100D0CC0((__int16 *)a1);
    sub_102DEF10(*(float *)(v4 + 100));
    v5 = 0.0;
    if ( *(float *)(v3 + 5084) < 35.0 )
      sub_1023C380((_DWORD *)v3, (int)"Player.Voice.Melee.Exhausted", v5, 0);
    else
      sub_1023C380((_DWORD *)v3, (int)"Player.Voice.Melee", v5, 0);
    sub_102B0A00(a1, a2, 0);
  }
}
