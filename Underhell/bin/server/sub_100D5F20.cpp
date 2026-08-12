int __stdcall sub_100D5F20(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // [esp-24h] [ebp-28h]

  result = sub_101C46F0(2);
  v3 = result;
  if ( result )
  {
    sub_10262870(a1, result + 8, result + 20);
    sub_102629A0(a2, v3 + 8, v3 + 20);
    v4 = v3 + 52;
    v6 = v3 + 52;
    v5 = v3 + 40;
    sub_10262870(a1, v5, v6);
    return sub_102629A0(a2, v5, v4);
  }
  return result;
}
