int __thiscall sub_102802E0(int this)
{
  int result; // eax
  int v3; // edi
  float *v4; // ebx
  float *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  const char *v9; // esi
  int v10; // edx
  double v11; // st7
  int *v12; // ecx
  float v13[3]; // [esp+2Ch] [ebp-34h] BYREF
  float v14[3]; // [esp+38h] [ebp-28h] BYREF
  float v15[3]; // [esp+44h] [ebp-1Ch] BYREF
  float v16; // [esp+50h] [ebp-10h] BYREF
  float v17; // [esp+54h] [ebp-Ch]
  float v18; // [esp+58h] [ebp-8h]
  float v19; // [esp+5Ch] [ebp-4h] BYREF

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
        result = sub_102B0FC0(0, 0.0);
        v10 = *(_DWORD *)(this + 1136);
        v19 = *(float *)(dword_106B31C8 + 12) + 0.5;
        if ( v10 != LODWORD(v19) )
        {
          result = this;
          if ( *(_BYTE *)(this + 84) )
          {
            v11 = v19;
            *(_BYTE *)(this + 88) |= 1u;
            *(float *)(this + 1136) = v11;
          }
          else
          {
            v12 = *(int **)(this + 24);
            if ( v12 )
              result = sub_100194B0(v12, 1136);
            *(float *)(this + 1136) = v19;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(this + 1144) )
          *(_BYTE *)(this + 1144) = 0;
        sub_102B0FC0(4, 0.0);
        sub_101E3110((void *)v3, 2u, 0, 0);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 968))(v3, v14);
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v3 + 1504))(v3, &v16, 1.0);
        v16 = v16 * 1000.0;
        v17 = v17 * 1000.0;
        v18 = 1000.0 * v18;
        sub_10422540(&v16, v15);
        v4 = (float *)sub_100E3960((int)"grenade_ar2", v14, v15, v3);
        sub_100DD660((int)v4, &v16);
        v5 = sub_1014AE30(v13, -400.0, 400.0);
        sub_100D7260(v4, v5);
        sub_100E0970((int)v4, v6, 5, 1);
        v7 = sub_100D1940((_DWORD *)this);
        sub_100F4E50((unsigned int *)v4, v7);
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)v4 + 500))(v4, *(float *)(dword_106DF744 + 44));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v8 = sub_100D1940((_DWORD *)this);
        sub_1023D4B0(1, (float *)(this + 580), 1000, 0.2, v8, 4, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1300))(v3, 5);
        sub_100CF490((char *)v3, 1, *(_DWORD *)(this + 1196));
        v19 = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100D2D00((float *)(this + 1132), &v19);
        v19 = *(float *)(dword_106B31C8 + 12) + 1.0;
        sub_100D2D50((float *)(this + 1136), &v19);
        *(float *)(v3 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
        ++*(_DWORD *)(this + 1376);
        v9 = *(const char **)(this + 92);
        if ( !v9 )
          v9 = String;
        return (*(int (__thiscall **)(int, int, _DWORD, const char *))(*(_DWORD *)off_10627F88 + 116))(
                 off_10627F88,
                 v3,
                 0,
                 v9);
      }
    }
  }
  return result;
}
