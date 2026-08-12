char __thiscall sub_10388E20(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  bool v5; // zf
  unsigned __int16 *v6; // esi
  int v8; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)(this + 4272) = 0;
  v3 = *(_DWORD *)(this + 4268);
  *(float *)(this + 4280) = *(float *)(dword_106B31C8 + 12) - 1.0;
  v4 = sub_100CF460((_DWORD *)this);
  if ( v4 )
  {
    LOBYTE(v4) = a2;
    v5 = (_BYTE)a2 == 0;
    *(_DWORD *)(this + 4268) = (_BYTE)a2 != 0;
    if ( !v5 )
      *(_DWORD *)(this + 4232) = 0;
  }
  else
  {
    *(_DWORD *)(this + 4268) = 0;
  }
  if ( *(_DWORD *)(this + 4268) != v3 )
  {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1900))(this);
    if ( !*(_DWORD *)(this + 4268) )
    {
      v6 = (unsigned __int16 *)(this + 2760);
      sub_100B8C40(v6, &v8, &a2);
      v4 = sub_100B8D70(v6);
      if ( v4 > a2 )
        LOBYTE(v4) = sub_100B8D80(v6, a2);
    }
  }
  return v4;
}
