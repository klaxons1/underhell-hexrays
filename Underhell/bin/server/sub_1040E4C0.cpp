float *__cdecl sub_1040E4C0(int a1, float *a2)
{
  float *v2; // esi

  v2 = (float *)sub_101811E0("grenade_beam", -1);
  (*(void (__thiscall **)(float *))(*(_DWORD *)v2 + 96))(v2);
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 76))(v2, a1);
  sub_1005C620((_BYTE *)v2 + 116, 255, 0, 0, 0);
  v2[539] = 2.0;
  sub_1025F370(v2, a2, 0);
  return v2;
}
