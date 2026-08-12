char __thiscall sub_1027FF90(float *this)
{
  double v2; // st7
  float v3; // eax
  char result; // al
  int v5; // edi
  int *v6; // ecx
  int *v7; // ecx
  int v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+10h] [ebp-8h]
  char v10; // [esp+17h] [ebp-1h]

  v2 = this[284];
  v9 = this[284];
  v8 = (*(int (**)(void))(*(_DWORD *)this + 1220))();
  v3 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1216))(this));
  result = sub_100D4170(this, v2, v3, v8, 183);
  v10 = result;
  if ( result )
  {
    v5 = sub_100D1940(this);
    if ( *(_DWORD *)(v5 + 1672) != LODWORD(v9) )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v5 + 24);
        if ( v6 )
          sub_100194B0(v6, 1672);
      }
      *(float *)(v5 + 1672) = v9;
    }
    if ( *((_DWORD *)this + 284) != *(_DWORD *)(v5 + 1672) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v7 = (int *)*((_DWORD *)this + 6);
        if ( v7 )
          sub_100194B0(v7, 1136);
      }
      this[284] = *(float *)(v5 + 1672);
    }
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 1132))(this, 7, 0.0);
    return v10;
  }
  return result;
}
