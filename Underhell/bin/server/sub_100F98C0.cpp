bool __cdecl sub_100F98C0(int a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 308);
  return (v1 == -1
       || off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] != v1 >> 12
       || !off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1])
      && (!(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1)
       || *(char **)(a1 + 92) == "info_target"
       || sub_100D6240((_DWORD *)a1, "info_target")
       || *(char **)(a1 + 92) == "info_landmark"
       || sub_100D6240((_DWORD *)a1, "info_landmark")
       || *(char **)(a1 + 92) == "path_corner"
       || sub_100D6240((_DWORD *)a1, "path_corner"));
}
