int __thiscall sub_1008CC10(_DWORD *this, int a2, int a3)
{
  int v4; // esi
  int v5; // edi
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  _WORD *v10; // edi
  float *v11; // ebx
  float *v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  float *v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+10h] [ebp-4h]

  v4 = this[9] + 168 * (unsigned __int16)a2;
  v5 = sub_1007A730(off_103DCD78, *(_DWORD *)v4);
  if ( !v5 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 68))(this, a2);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5) )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 108))(v5, 0);
  if ( *(_BYTE *)((*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 20))(*(unsigned __int16 *)(v4 + 4)) + 92) != 0xFF )
  {
    if ( sub_10085580(this, v5) || sub_10085530(this, v5) )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 56))(
        dword_1041318C,
        *(unsigned __int16 *)(v4 + 4),
        0);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 108))(v5, 0);
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1041318C + 56))(
      dword_1041318C,
      *(unsigned __int16 *)(v4 + 4),
      1);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
    v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    v18 = v12;
    if ( !(_BYTE)a3 )
    {
      if ( !sub_1000E340(v11, (float *)(v4 + 96))
        && !sub_1000E340(v18, (float *)(v4 + 108))
        && *(float *)(v4 + 144) >= 1.0 )
      {
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 108))(v5, 0);
      }
      v12 = v18;
    }
    *(float *)(v4 + 96) = *v11;
    *(float *)(v4 + 100) = v11[1];
    *(float *)(v4 + 104) = v11[2];
    *(float *)(v4 + 108) = *v12;
    *(float *)(v4 + 112) = v12[1];
    *(float *)(v4 + 116) = v12[2];
    sub_10017210(&a3, dword_1047C96C);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
    v14 = a3;
    v15 = v13;
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 188))(a3);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 172))(v14, 0);
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v15) - 1;
    if ( v16 )
    {
      if ( v16 == 2 )
        sub_1008CA90((int)this, v5, a2);
    }
    else
    {
      sub_1008CB40((int)this, v5, a2);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 172))(v14, v19);
    sub_100170F0(&a3);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 108))(v5, 0);
  }
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 56))(
    dword_1041318C,
    *(unsigned __int16 *)(v4 + 4),
    0);
  v7 = this[65];
  v8 = this[63];
  if ( v7 + 1 > v8 )
    sub_1007D060(this + 62, v7 - v8 + 1);
  ++this[65];
  v9 = this[62];
  result = this[65] - v7 - 1;
  this[66] = v9;
  if ( result > 0 )
    result = (int)memcpy((void *)(v9 + 2 * v7 + 2), (const void *)(v9 + 2 * v7), 2 * result);
  v10 = (_WORD *)(this[62] + 2 * v7);
  if ( v10 )
    *v10 = a2;
  return result;
}
