char __thiscall sub_1001F9D0(void *this, float *a2, float *a3, float a4, float a5, char a6)
{
  int v6; // esi
  _DWORD *v8; // ebx
  float *v9; // esi
  double v10; // st6
  float v12; // [esp+Ch] [ebp-20h]
  float v13; // [esp+10h] [ebp-1Ch]
  float v14; // [esp+18h] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+28h] [ebp-4h]
  float v18; // [esp+34h] [ebp+8h]
  float v19; // [esp+34h] [ebp+8h]

  v6 = 1;
  v17 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
    return 0;
  while ( 1 )
  {
    v8 = (_DWORD *)sub_1025FB50(v6);
    if ( !v8 || a6 && (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 1080))(this, v8) == 1 )
      goto LABEL_11;
    v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 576))(v8);
    if ( sub_10424800(v9, a2, a3, 0) < a5 )
    {
      v14 = *a3 - *a2;
      v15 = a3[1] - a2[1];
      v18 = off_10689714();
      v12 = *v9 - *a2;
      v13 = v9[1] - a2[1];
      if ( off_10689714() < v18 )
      {
        v10 = v12 * v14 + v15 * v13;
        if ( a4 < v10 )
          return 1;
        if ( v10 > 0.0 )
        {
          v19 = sub_100737B0(v8[419]) * 1.414;
          if ( sub_104245F0(v9, a2, a3, 0) < v19 )
            return 1;
        }
      }
    }
    v6 = v17;
LABEL_11:
    v17 = ++v6;
    if ( v6 > *(_DWORD *)(dword_106B31C8 + 20) )
      return 0;
  }
}
