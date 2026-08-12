char __thiscall sub_102DCD80(_DWORD *this, float *a2, int a3, int a4)
{
  float *v6; // eax
  float *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  float v12; // [esp+0h] [ebp-20h]
  float v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+1Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    return sub_100BFE00((int)this, (int)a2, a3, a4);
  v14 = *(float *)((*(int (__thiscall **)(_DWORD *))(this[80] + 4))(this + 80) + 8);
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(this[80] + 8))(this + 80);
  v13 = v6[2] - v14;
  v12 = *v6 * 0.7;
  v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  if ( !sub_102DB400(a2, v7, v12, v13, a4) )
    return 1;
  *(_DWORD *)(a4 + 80) = 0;
  v8 = sub_10001430(this);
  if ( v8 )
  {
    v9 = *v8;
    v10 = *v8 + *(_DWORD *)(*v8 + 176) + 12 * this[214];
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 4) )
      {
        v11 = *(_DWORD *)(v9 + 160) + 216 * *(_DWORD *)(*(_DWORD *)(v10 + 8) + 68 * *(_DWORD *)(a4 + 80) + v10);
        *(_DWORD *)(a4 + 60) = "**studio**";
        *(_WORD *)(a4 + 66) = 0x8000;
        *(_WORD *)(a4 + 64) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 12))(
                                dword_106BAFF8,
                                v9 + v11 + *(_DWORD *)(v9 + v11 + 176));
        return 1;
      }
    }
  }
  return 0;
}
