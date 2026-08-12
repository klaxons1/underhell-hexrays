int __thiscall sub_102AE690(int *this)
{
  double (__thiscall *v2)(int, _DWORD, _DWORD); // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // edi
  char *v10; // eax
  _DWORD *v11; // edi
  const char *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  const char *v17; // edx
  float v18; // [esp+8h] [ebp-A8h]
  int v19; // [esp+Ch] [ebp-A4h]
  int v20[19]; // [esp+1Ch] [ebp-94h] BYREF
  float v21[3]; // [esp+68h] [ebp-48h] BYREF
  char v22[4]; // [esp+74h] [ebp-3Ch] BYREF
  int v23[3]; // [esp+78h] [ebp-38h] BYREF
  int v24; // [esp+84h] [ebp-2Ch]
  int v25; // [esp+88h] [ebp-28h]
  int v26; // [esp+8Ch] [ebp-24h] BYREF
  int v27; // [esp+90h] [ebp-20h]
  int v28; // [esp+94h] [ebp-1Ch]
  int v29; // [esp+98h] [ebp-18h]
  int v30; // [esp+9Ch] [ebp-14h]
  int i; // [esp+A0h] [ebp-10h]
  _BYTE v32[5]; // [esp+A7h] [ebp-9h] BYREF
  int *v33; // [esp+ACh] [ebp-4h]

  v19 = off_1065FD74;
  v2 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
  v33 = this;
  v18 = v2(dword_106B31E4, 0.75, 1.75) + *(float *)(dword_106B31C8 + 12);
  result = sub_100EC3F0(this, (int)sub_102AE690, v18, v19);
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
    v4 = result;
    v5 = 0;
    *(_DWORD *)&v32[1] = result;
    if ( result )
    {
      sub_10072560(v20);
      v6 = this[240];
      *(float *)v22 = 512.0;
      sub_1006FF60(v20, v6);
      sub_10070FE0(v20, 400);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      sub_10072770(v20, (float *)(v4 + 580), 512.0);
      memset(v23, 0, sizeof(v23));
      v24 = 0;
      v25 = 0;
      if ( sub_100727B0(0, &flt_106F1CA8, v20, v23) > 0 )
      {
        v7 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        for ( i = 0; v7 < v24; i = v7 )
        {
          v8 = *(_DWORD *)(v23[0] + 4 * v7);
          if ( v8 )
          {
            if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
              sub_100DAE60(v4);
            if ( sub_10071420(v8, v8, 0, v20, (float *)(v4 + 580), (float *)v22, 0, 0) )
            {
              v9 = 0;
              if ( v5 <= 0 )
              {
LABEL_17:
                sub_100703C0(v8, 5, v21);
                v11 = (_DWORD *)sub_102ADA20(v33, v8, v32);
                if ( v11 )
                {
                  v12 = *(const char **)(v8 + 260);
                  if ( !v12 )
                    v12 = String;
                  sub_102AC780(v33, (char)v12);
                  sub_102AC0F0((float *)v33, v11, v21[0], SLODWORD(v21[1]), SLODWORD(v21[2]));
                  v13 = *(_DWORD *)(v8 + 260);
                  v14 = v5;
                  if ( v5 + 1 > v27 )
                  {
                    sub_102ABFC0(&v26, v5 - v27 + 1);
                    v5 = v29;
                  }
                  v15 = v26;
                  v29 = ++v5;
                  v30 = v26;
                  if ( v5 - v14 - 1 > 0 )
                  {
                    memcpy((void *)(v26 + 4 * v14 + 4), (const void *)(v26 + 4 * v14), 4 * (v5 - v14 - 1));
                    v15 = v26;
                  }
                  v16 = (_DWORD *)(v15 + 4 * v14);
                  if ( v16 )
                    *v16 = v13;
                }
                else
                {
                  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
                    sub_100DAE60(v8);
                  v17 = *(const char **)(v8 + 260);
                  if ( !v17 )
                    v17 = String;
                  sub_102AD4D0(v33, *(float *)&v17, *(float *)(v8 + 580), *(_DWORD *)(v8 + 584), *(_DWORD *)(v8 + 588));
                }
              }
              else
              {
                while ( 1 )
                {
                  v10 = *(char **)(v26 + 4 * v9);
                  if ( *(char **)(v8 + 260) == v10 )
                    break;
                  if ( !v10 )
                    v10 = (char *)String;
                  if ( sub_100D6190((_DWORD *)v8, v10) )
                    break;
                  if ( ++v9 >= v5 )
                    goto LABEL_17;
                }
              }
              v4 = *(_DWORD *)&v32[1];
            }
          }
          v7 = i + 1;
        }
        sub_102375F0(&v26);
      }
      sub_102375F0(v23);
      return sub_100725D0(v20);
    }
  }
  return result;
}
