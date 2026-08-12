int __thiscall sub_100DCAE0(int this, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  int v6; // edx
  double v7; // st7
  int v8; // edx
  int v9; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // rt1
  double v13; // rt2
  double v14; // st6
  double v15; // st7
  double v16; // rtt
  double v17; // st6
  double v18; // st7
  double v19; // rt0
  double v20; // st7
  int result; // eax
  int v22; // eax
  int v23; // [esp+0h] [ebp-28h]
  float v24[4]; // [esp+8h] [ebp-20h] BYREF
  int v25; // [esp+18h] [ebp-10h] BYREF
  int v26; // [esp+1Ch] [ebp-Ch] BYREF
  float v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]

  sub_1009EB00((_DWORD *)this, &v25, &v26);
  v28 = sub_1009E8A0((_DWORD *)(this + 20));
  v3 = sub_1009E8A0((_DWORD *)(this + 32));
  v27 = v3;
  if ( v28 > v3 )
  {
    v4 = v3;
    v5 = v28;
    v28 = v4;
    v27 = v5;
  }
  if ( v25 )
  {
    if ( v25 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), v24, v26);
      v8 = v26;
      v9 = 0;
      if ( v26 > 0 )
      {
        v10 = v28;
        v11 = v27;
        while ( 1 )
        {
          v13 = v11;
          v14 = v10;
          v15 = v13;
          if ( v14 <= v24[v9] )
          {
            v16 = v14;
            v17 = v15;
            v18 = v16;
            if ( v17 < v24[v9] )
              v24[v9] = v17;
            v19 = v17;
            v14 = v18;
            v15 = v19;
          }
          else
          {
            v24[v9] = v14;
          }
          if ( ++v9 >= v8 )
            break;
          v12 = v14;
          v11 = v15;
          v10 = v12;
        }
      }
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 4) + 48))(*(_DWORD *)(this + 4), v24, v8);
    }
    else if ( v25 == 4 )
    {
      v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 104))(*(_DWORD *)(this + 12));
      LODWORD(v24[3]) = v6;
      v7 = (double)v6;
      if ( v28 <= v7 )
      {
        if ( v27 >= v7 )
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), v6);
        else
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), (int)v27);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), (int)v28);
      }
    }
  }
  else
  {
    v20 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    if ( v28 <= v20 )
    {
      if ( v27 < v20 )
        v20 = v27;
    }
    else
    {
      v20 = v28;
    }
    *(float *)&v23 = v20;
    sub_1009E9B0((_DWORD *)this, v23);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v22 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v22);
  }
  return result;
}
