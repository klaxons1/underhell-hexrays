double __stdcall sub_103EB360(int a1)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 != -1
    && (v2 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1],
        v3 = v1 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] == v3)
    && *v2
    && (off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] != v3 ? (v4 = 0) : (v4 = *v2),
        *(char **)(v4 + 92) == "hunter_flechette" || sub_100D6240((_DWORD *)v4, "hunter_flechette")) )
  {
    return 0.1;
  }
  else
  {
    return 1.0;
  }
}
