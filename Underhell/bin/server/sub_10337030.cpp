char __thiscall sub_10337030(int this, int a2)
{
  _DWORD *v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  float *v6; // eax
  double v7; // st3
  double v8; // st6
  _DWORD *v10; // eax
  float *v11; // eax
  float *v12; // eax
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  float v18; // [esp+Ch] [ebp-18h]
  float v19; // [esp+10h] [ebp-14h]
  float v20; // [esp+14h] [ebp-10h]

  v3 = (_DWORD *)(this + 4508);
  if ( a2 == this + 4508 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 5932) + 24))(this + 5932) )
    {
      v4 = *(_DWORD *)(this + 5952);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 5952) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(this + 5952) & 0xFFF) + 1];
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
      v7 = *v6 - *(float *)(this + 4536);
      v8 = *(float *)(this + 4560) + *(float *)(this + 4560);
      if ( v8 * v8 > v7 * v7
                   + (v6[1] - *(float *)(this + 4540)) * (v6[1] - *(float *)(this + 4540))
                   + (v6[2] - *(float *)(this + 4544)) * (v6[2] - *(float *)(this + 4544)) )
        return 0;
    }
  }
  else if ( sub_100296A0((_DWORD *)this) )
  {
    if ( a2 == this + 5932 )
    {
      if ( *(_BYTE *)(this + 5956) )
      {
        if ( sub_10050FC0(v3) )
        {
          v10 = (_DWORD *)sub_10050FC0(v3);
          v11 = (float *)sub_10019640(v10);
          v18 = *v11;
          v19 = v11[1];
          v20 = v11[2];
          v12 = (float *)sub_10019640((_DWORD *)this);
          v13 = v19 - v12[1];
          v14 = v13 * v13;
          v15 = v18 - *v12;
          v16 = v14;
          v17 = v20 - v12[2];
          if ( v15 * v15 + v16 + v17 * v17 > 291600.0 )
            return 0;
        }
      }
    }
  }
  return 1;
}
