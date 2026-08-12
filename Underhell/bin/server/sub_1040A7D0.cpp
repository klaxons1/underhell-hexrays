int __thiscall sub_1040A7D0(int this)
{
  int result; // eax
  int v3; // edi
  float *v4; // ebx
  float *v5; // eax
  float *v6; // ebx
  float *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  const char *v11; // esi
  int v12; // edx
  double v13; // st7
  int *v14; // ecx
  float v15[3]; // [esp+24h] [ebp-34h] BYREF
  float v16[3]; // [esp+30h] [ebp-28h] BYREF
  int v17[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v18; // [esp+48h] [ebp-10h] BYREF
  float v19; // [esp+4Ch] [ebp-Ch]
  float v20; // [esp+50h] [ebp-8h]
  float v21; // [esp+54h] [ebp-4h] BYREF

  result = sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( sub_100CF5D0((_DWORD *)v3, *(_DWORD *)(this + 1196)) <= 0 || *(_BYTE *)(v3 + 447) == 3 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 184);
        result = sub_102B0FC0((_DWORD *)this, 0, 0.0);
        v12 = *(_DWORD *)(this + 1136);
        v21 = *(float *)(dword_106B31C8 + 12) + 0.5;
        if ( v12 != LODWORD(v21) )
        {
          result = this;
          if ( *(_BYTE *)(this + 84) )
          {
            v13 = v21;
            *(_BYTE *)(this + 88) |= 1u;
            *(float *)(this + 1136) = v13;
          }
          else
          {
            v14 = *(int **)(this + 24);
            if ( v14 )
              result = sub_100194B0(v14, 1136);
            *(float *)(this + 1136) = v21;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(this + 1144) )
          *(_BYTE *)(this + 1144) = 0;
        sub_102B0FC0((_DWORD *)this, 4, 0.0);
        sub_101E3110((void *)v3, 2u, 0, 0);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 968))(v3, v15);
        v4 = (float *)sub_101E7560((char *)v3);
        v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 508))(v3);
        *(float *)v17 = *v5 + *v4;
        *(float *)&v17[1] = v4[1] + v5[1];
        *(float *)&v17[2] = v4[2] + v5[2];
        sub_10422220(v17, &v18);
        v18 = v18 * 1000.0;
        v19 = v19 * 1000.0;
        v20 = 1000.0 * v20;
        sub_10422540(&v18, v16);
        v6 = (float *)sub_100E3960((int)"grenade_ar2", v15, v16, v3);
        sub_100DD660((int)v6, &v18);
        v7 = sub_1014AE30((float *)v17, -400.0, 400.0);
        sub_100D7260(v6, v7);
        sub_100E0970((int)v6, v8, 5, 1);
        v9 = sub_100D1940((_DWORD *)this);
        sub_100F4E50((unsigned int *)v6, v9);
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)v6 + 500))(v6, *(float *)(dword_106DF744 + 44));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v10 = sub_100D1940((_DWORD *)this);
        sub_1023D4B0(1, (float *)(this + 580), 1000, 0.2, v10, 4, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1300))(v3, 5);
        sub_100CF490((char *)v3, 1, *(_DWORD *)(this + 1196));
        v21 = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100D2D00((float *)(this + 1132), &v21);
        v21 = *(float *)(dword_106B31C8 + 12) + 1.0;
        sub_100D2D50((float *)(this + 1136), &v21);
        *(float *)(v3 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
        ++*(_DWORD *)(this + 1376);
        v11 = *(const char **)(this + 92);
        if ( !v11 )
          v11 = String;
        return (*(int (__thiscall **)(int, int, _DWORD, const char *))(*(_DWORD *)off_10627F88 + 116))(
                 off_10627F88,
                 v3,
                 0,
                 v11);
      }
    }
  }
  return result;
}
