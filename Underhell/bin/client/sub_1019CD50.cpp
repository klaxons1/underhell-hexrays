int __thiscall sub_1019CD50(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // esi
  int (__thiscall *v4)(_DWORD *, const char *); // edx
  int v5; // eax
  double v6; // st7
  int v8; // [esp-8h] [ebp-54h]
  float v9[6]; // [esp+Ch] [ebp-40h] BYREF
  float v10[3]; // [esp+24h] [ebp-28h] BYREF
  float v11; // [esp+30h] [ebp-1Ch] BYREF
  float v12; // [esp+34h] [ebp-18h]
  float v13; // [esp+38h] [ebp-14h]
  float v14; // [esp+3Ch] [ebp-10h]
  double v15; // [esp+40h] [ebp-Ch]
  float v16; // [esp+48h] [ebp-4h]

  sub_1015B460((int)this);
  v2 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v3 = (_DWORD *)sub_100B66A0((int)&dword_1042FB78, (int)"plushair");
  if ( v3 )
  {
    v16 = (float)(sub_10076740() / 2);
    HIDWORD(v15) = sub_10076720() / 2;
    v4 = *(int (__thiscall **)(_DWORD *, const char *))(*(this - 489) + 140);
    v14 = (float)SHIDWORD(v15);
    v5 = v4(this - 489, "vehicle_driver_eyes");
    (*(void (__thiscall **)(_DWORD *, int, float *, float *))(*(this - 489) + 148))(this - 489, v5, &v11, v10);
    v10[2] = 0.0;
    v10[0] = 0.0;
    sub_101EDFB0(v10);
    v11 = v9[3] * 100.0 + v11;
    v12 = v9[4] * 100.0 + v12;
    v13 = 100.0 * v9[5] + v13;
    sub_1013B9F0(&v11, v9);
    v16 = (double)sub_10076740() * (v9[0] * 0.5) + 0.5 + v16;
    v15 = v14;
    v14 = COERCE_FLOAT(sub_10076720());
    v6 = (double)SLODWORD(v14);
    LODWORD(v14) = (v3[42] - v3[41]) / 2;
    v8 = (int)(v15 - (v6 * (v9[1] * 0.5) + 0.5) - (double)SLODWORD(v14));
    LODWORD(v14) = (v3[40] - v3[39]) / 2;
    sub_100B3BE0(v3, (int)(v16 - (double)SLODWORD(v14)), v8, &dword_1042FB88);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
