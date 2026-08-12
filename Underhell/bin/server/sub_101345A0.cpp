int __stdcall sub_101345A0(float *a1)
{
  int result; // eax
  double v2; // st7
  float v3; // [esp+0h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-8h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1
    && *(_DWORD *)a1
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 320))(*(_DWORD *)a1)
    && *(_DWORD *)a1
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 320))(*(_DWORD *)a1) )
  {
    return sub_101EB6A0(a1);
  }
  sub_1042CBA0("mat_hdr_manual_tonemap_rate");
  result = sub_1042C850(&v4);
  if ( (_BYTE)result )
  {
    if ( *((_DWORD *)a1 + 6) == 1 )
      v2 = a1[2];
    else
      v2 = 0.0;
    v3 = v2;
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 4))(LODWORD(v3));
  }
  return result;
}
