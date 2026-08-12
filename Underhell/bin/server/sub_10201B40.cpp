int __thiscall sub_10201B40(int this)
{
  int v2; // edx
  bool v3; // c0
  const char *v4; // edi
  const char *v5; // eax
  const char *v6; // edi
  const char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  char v10; // cl
  double v12; // [esp+0h] [ebp-1Ch]
  float v13; // [esp+8h] [ebp-14h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  sub_100E0970(this, v2, 0, 0);
  v3 = *(float *)(this + 852) > 0.0;
  *(_BYTE *)(this + 801) = 1;
  if ( !v3 )
  {
    v4 = *(const char **)(this + 92);
    if ( !v4 )
      v4 = String;
    v5 = sub_100D6390((_DWORD *)this);
    DevMsg("%s (%s) has an invalid spotlight length <= 0, setting to 500\n", v4, v5);
    *(float *)(this + 852) = 500.0;
  }
  if ( *(float *)(this + 860) <= 0.0 )
  {
    v6 = *(const char **)(this + 92);
    if ( !v6 )
      v6 = String;
    v7 = sub_100D6390((_DWORD *)this);
    DevMsg("%s (%s) has an invalid spotlight width <= 0, setting to 10\n", v6, v7);
    *(float *)(this + 860) = 10.0;
  }
  if ( *(float *)(this + 860) > 102.3 )
  {
    v8 = *(const char **)(this + 92);
    if ( !v8 )
      v8 = String;
    v12 = *(float *)(this + 860);
    v9 = sub_100D6390((_DWORD *)this);
    DevMsg("%s (%s) has an invalid spotlight width %.1f (max %.1f).\n", v8, v9, v12, 102.3000030517578);
    *(float *)(this + 860) = 102.3;
  }
  *(float *)(this + 804) = flt_106F1CA8;
  *(float *)(this + 808) = flt_106F1CAC;
  *(float *)(this + 812) = flt_106F1CB0;
  *(float *)(this + 816) = flt_106F1CA8;
  *(float *)(this + 820) = flt_106F1CAC;
  *(float *)(this + 824) = flt_106F1CB0;
  *(_DWORD *)(this + 844) = -1;
  *(_DWORD *)(this + 848) = -1;
  *(float *)(this + 828) = flt_106F1CA8;
  *(float *)(this + 832) = flt_106F1CAC;
  *(float *)(this + 836) = flt_106F1CB0;
  v10 = *(_BYTE *)(this + 248) & 1;
  *(float *)(this + 856) = *(float *)(this + 852);
  *(_BYTE *)(this + 800) = v10;
  sub_100EC3F0((_DWORD *)this, (int)sub_10201920, 0.0, 0);
  v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v13, 0);
}
