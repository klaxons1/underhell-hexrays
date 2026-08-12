int __thiscall sub_102ADCE0(_DWORD *this)
{
  _DWORD *v1; // edi
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  float *v6; // eax
  float *v7; // eax
  int v8; // edi
  int v9; // esi
  __int64 v10; // [esp-8h] [ebp-104h]
  _DWORD v11[20]; // [esp+Ch] [ebp-F0h] BYREF
  int v12[19]; // [esp+5Ch] [ebp-A0h] BYREF
  _DWORD v13[5]; // [esp+A8h] [ebp-54h] BYREF
  float v14[3]; // [esp+BCh] [ebp-40h] BYREF
  float v15[3]; // [esp+C8h] [ebp-34h] BYREF
  float v16; // [esp+D4h] [ebp-28h] BYREF
  float v17; // [esp+D8h] [ebp-24h]
  float v18; // [esp+DCh] [ebp-20h]
  int v19; // [esp+E0h] [ebp-1Ch] BYREF
  int v20; // [esp+E4h] [ebp-18h]
  int v21; // [esp+E8h] [ebp-14h]
  int v22; // [esp+ECh] [ebp-10h]
  int v23; // [esp+F0h] [ebp-Ch]
  _DWORD *v24; // [esp+F4h] [ebp-8h]
  int v25; // [esp+F8h] [ebp-4h]

  v1 = this;
  v24 = this;
  result = sub_100EC3F0(this, (int)sub_102ADCE0, -1.0, off_1065FD78);
  if ( *((_BYTE *)v1 + 1052) != 1 )
  {
    v3 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    sub_10072560(v12);
    sub_1006FF60(v12, v1[240]);
    sub_10070FE0(v12, 400);
    if ( sub_100727B0(0, &flt_106F1CA8, v12, &v19) > 0 && v22 > 0 )
    {
      do
      {
        v4 = *(_DWORD *)(v19 + 4 * v3);
        if ( v4 )
        {
          if ( *(int *)(dword_106B31C8 + 20) <= 1 )
            v5 = sub_10261B20();
          else
            v5 = 0;
          sub_10070340(v4, v5, &v16);
          v6 = (float *)sub_10073730(5);
          v14[0] = *v6 + v16;
          v14[1] = v6[1] + v17;
          v14[2] = v6[2] + v18;
          v7 = (float *)sub_10073710(5);
          v15[0] = *v7 + v16;
          v15[1] = v7[1] + v17;
          v15[2] = v7[2] + v18;
          sub_1025F990(v13, (int)v11, 20, 0);
          v8 = sub_1025F9C0((int)v15, (int)v14, (int)v13);
          v9 = 0;
          if ( v8 > 0 )
          {
            while ( *(_BYTE *)(v11[v9] + 306) != 6 || sub_101B4DE0(v11[v9]) <= 250.0 )
            {
              if ( ++v9 >= v8 )
                goto LABEL_14;
            }
            ++v25;
          }
LABEL_14:
          v1 = v24;
        }
        ++v3;
      }
      while ( v3 < v22 );
      if ( v25 > 0 && v22 == v25 )
      {
        HIDWORD(v10) = v1;
        LODWORD(v10) = v1;
        *((_BYTE *)v1 + 1052) = 1;
        sub_1010DD80(v1 + 264, v10, 0.0);
      }
    }
    sub_100725D0(v12);
    result = v19;
    v22 = 0;
    if ( v21 >= 0 )
    {
      if ( v19 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
        result = 0;
        v19 = 0;
      }
      v20 = 0;
    }
    v23 = result;
    if ( v21 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
