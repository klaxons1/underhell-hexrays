int __thiscall sub_101254E0(int this)
{
  char *v2; // eax
  float *v3; // eax
  const char *v5; // esi
  float v6; // [esp+0h] [ebp-Ch]

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (float *)sub_1012BF20(0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    *(float *)(this + 800) = v3[179];
    *(float *)(this + 804) = v3[180];
    *(float *)(this + 808) = v3[181];
    sub_100EC3F0((_DWORD *)this, (int)sub_10124830, 0.0, 0);
    v6 = *(float *)(this + 812) + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v6, 0);
  }
  else
  {
    v5 = *(const char **)(this + 212);
    if ( !v5 )
      v5 = String;
    return Msg("env_tracer: unknown entity \"%s\"\n", v5);
  }
}
