void __userpurge sub_1032AC20(int a1@<ecx>, int a2@<ebx>, int a3)
{
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float v8; // [esp+0h] [ebp-Ch]

  sub_101B5140((float *)(a1 + 3684), a3);
  sub_10023CB0((char *)a1, 36);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || (*(_DWORD *)(a3 + 64) & 0x4000000) != 0
    || (v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        v7 = *(float *)(a1 + 724) - v4[181],
        v7 <= 120.0)
    || (v5 = *(float *)(a1 + 716) - v4[179],
        v6 = *(float *)(a1 + 720) - v4[180],
        v8 = v7 * v7 + v6 * v6 + v5 * v5,
        off_10689708(v8) <= 360.0) )
  {
    sub_1032A9D0(a1, a2);
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2260))(a1);
  }
}
