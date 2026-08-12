char __thiscall sub_10370E60(int this, int a2, int a3)
{
  bool v5; // bl
  float *v6; // eax
  int v7; // edi
  int v8; // eax
  float v9; // [esp+20h] [ebp-Ch] BYREF
  float v10; // [esp+24h] [ebp-8h]
  float v11; // [esp+28h] [ebp-4h]

  if ( *(_DWORD *)(this + 2372) == 2 )
    return 1;
  v5 = sub_100697A0((_DWORD *)this, 98, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && (v5
     || (sub_1007DE30(*(_DWORD **)(this + 2588)) == 11 || sub_1007DE30(*(_DWORD **)(this + 2588)) == 6)
     && !sub_100697A0((_DWORD *)this, 103, 0)) )
  {
    v6 = (float *)sub_100217F0((void *)this);
    v9 = *v6;
    v10 = v6[1];
    v11 = v6[2];
    if ( v5 )
      goto LABEL_12;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( fabs(v10 - *(float *)(this + 584)) + fabs(v9 - *(float *)(this + 580)) + fabs(v11 - *(float *)(this + 588)) < 512.0 )
    {
LABEL_12:
      v7 = *(_DWORD *)this;
      v8 = (*(int (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 368))(
             this,
             &v9,
             1.0,
             0.2,
             0.0);
      (*(void (__thiscall **)(int, int))(v7 + 1704))(this, v8);
    }
  }
  return sub_101782E0(a2, a3);
}
