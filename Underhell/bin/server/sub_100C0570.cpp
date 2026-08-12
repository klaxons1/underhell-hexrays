int __thiscall sub_100C0570(int this, float a2, char a3)
{
  int v3; // esi
  void (__thiscall *v4)(int); // edx
  int v6; // edi
  int result; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  double v14; // st6
  double v15; // st7
  int v16[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v17[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  int v20; // [esp+30h] [ebp-Ch]
  int v21; // [esp+34h] [ebp-8h]
  int v22; // [esp+38h] [ebp-4h]

  v3 = dword_10700AC8;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v18 = this;
  v4(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD *)(this + 1100);
  if ( !v6 || !*(_DWORD *)v6 )
    v6 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( v6 )
  {
    result = *(_DWORD *)v6;
    v8 = *(_DWORD *)v6 + *(_DWORD *)(*(_DWORD *)v6 + 176) + 12 * *(_DWORD *)(this + 856);
    if ( v8 )
    {
      v20 = 0;
      v21 = 0;
      v9 = 255;
      v19 = 0;
      if ( *(int *)(v8 + 4) > 0 )
      {
        v22 = 0;
        do
        {
          v10 = v22 + *(_DWORD *)(v8 + 8);
          v11 = *(_DWORD *)(v10 + v8);
          v12 = v8 + v10;
          sub_100BEB30(v18, v11, (int)v16, (int)v17);
          if ( !a3 )
          {
            v13 = *(_DWORD *)(v12 + 4) % 8;
            v14 = flt_1060D12C[3 * v13] * 255.0;
            v20 = (int)(flt_1060D128[3 * v13] * 255.0);
            v15 = 255.0 * flt_1060D130[3 * v13];
            v21 = (int)v14;
            v9 = (int)v15;
          }
          sub_1011B9E0((int)v16, v12 + 8, v12 + 20, (int)v17, v20, v21, v9, 0, a2);
          v22 += 68;
          result = v19 + 1;
          v19 = result;
        }
        while ( result < *(_DWORD *)(v8 + 4) );
      }
    }
  }
  return result;
}
