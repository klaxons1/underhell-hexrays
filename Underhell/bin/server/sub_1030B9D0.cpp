bool __thiscall sub_1030B9D0(_DWORD *this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // ecx
  int v5; // eax
  bool result; // al

  result = (a2[4] != 8
         || *a2 == -1
         || (v3 = &off_1061BE18[4 * (*a2 & 0xFFF) + 1], v4 = *a2 >> 12, off_1061BE18[4 * (*a2 & 0xFFF) + 2] != v4)
         || !*v3
         || (off_1061BE18[4 * (*a2 & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v3),
             (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) != 4))
        && sub_100242F0(this, (int)a2);
  return result;
}
