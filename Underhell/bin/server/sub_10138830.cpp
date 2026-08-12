void sub_10138830()
{
  _DWORD *v0; // eax
  __int64 v1; // [esp-8h] [ebp-Ch]

  v0 = sub_1012BC90(&dword_1069E3E0, 0, "env_credits");
  if ( v0 )
  {
    HIDWORD(v1) = v0;
    LODWORD(v1) = v0;
    sub_1010DD80(v0 + 200, v1, 0.0);
  }
}
