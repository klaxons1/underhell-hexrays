const char *__thiscall sub_101486D0(_BYTE *this, int a2, int a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 203);
  if ( !v3 )
    return "GlassBreak";
  if ( v3 == 7 )
    return "BulletProof";
  return sub_100E8A80(this, a2, a3);
}
