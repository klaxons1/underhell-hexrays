int __thiscall sub_1008E460(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // edx
  int result; // eax
  int v7; // eax
  int v8; // ebx
  void *v9; // edi
  int v10; // ecx
  float *v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  float v15; // [esp+0h] [ebp-34h]
  float v16[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v17; // [esp+28h] [ebp-Ch]
  _DWORD *v18; // [esp+2Ch] [ebp-8h]
  int v19; // [esp+30h] [ebp-4h]
  int v20; // [esp+40h] [ebp+Ch]

  v3 = *(_DWORD *)(this[5] + 8);
  v5 = 0;
  v18 = this;
  v19 = 0;
  v20 = v3;
  if ( a3 == -1 )
    return 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a2 + 4 * a3);
    v17 = v7;
    if ( v7 != -1 )
      goto LABEL_7;
    if ( !v5 )
      return 0;
    v7 = *(_DWORD *)(v5 + 16);
LABEL_7:
    v8 = sub_1008E2C0(this, v20, a3, v7);
    v9 = (void *)sub_1042FCC0(48);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v20 + 4 * a3);
      v15 = *(float *)(v10 + 56);
      v11 = sub_1008D160(v10, v16, *(_DWORD *)(v18[1] + 1676));
      result = sub_100B9A20(v9, (int)v11, v15, v8, 4, a3);
    }
    else
    {
      result = 0;
    }
    v12 = *(_DWORD *)(result + 40);
    if ( v12 )
      *(_DWORD *)(v12 + 44) = 0;
    v13 = v19;
    *(_DWORD *)(result + 40) = v19;
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 44);
      if ( v14 )
        *(_DWORD *)(v14 + 40) = 0;
      *(_DWORD *)(*(_DWORD *)(result + 40) + 44) = result;
    }
    a3 = v17;
    v19 = result;
    v5 = result;
    if ( v17 == -1 )
      return result;
    this = v18;
  }
}
