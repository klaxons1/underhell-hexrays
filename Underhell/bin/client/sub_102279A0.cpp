void __thiscall sub_102279A0(_DWORD *this, int a2, int a3, int a4, int a5, char a6)
{
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CParticleCollection::GenerateSortedIndexList",
    0,
    "Particle/Effect_Rendering",
    0,
    4);
  if ( a6 )
  {
    sub_10227440(*(float *)&a2, *(float *)&a3, *(float *)&a4, a5, this);
    if ( 16 * this[10] > 16 )
      sub_102278C0(
        (int)dword_10465D70,
        (int)&dword_10465D70[4 * this[10]],
        (unsigned __int8 (__cdecl *)(_DWORD *, int *))sub_10227390);
    sub_10227920(
      dword_10465D70,
      (int)&dword_10465D70[4 * this[10]],
      (unsigned __int8 (__cdecl *)(_DWORD *, int *))sub_10227390);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    sub_10227670(a2, a3, a4, a5, this);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
