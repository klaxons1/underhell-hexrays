void __thiscall sub_102F43F0(float *this)
{
  const char *v2; // eax
  float v3; // edi
  char *v4; // eax

  if ( sub_100CF460(this) && *(float *)(dword_106B31C8 + 12) - this[1407] > -0.001 )
  {
    v2 = *(const char **)(sub_100CF460(this) + 92);
    if ( !v2 )
      v2 = String;
    v3 = *this;
    v4 = sub_1025F440("attacking_with_weapon:%s", v2);
    (*(void (__thiscall **)(float *, const char *, char *, _DWORD, _DWORD, _DWORD))(LODWORD(v3) + 2344))(
      this,
      "TLK_ATTACKING",
      v4,
      0,
      0,
      0);
    sub_100925F0(this + 1407, 3.0, 5.0);
  }
}
