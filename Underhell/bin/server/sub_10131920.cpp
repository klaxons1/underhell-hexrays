void __thiscall sub_10131920(int this, int a2, char a3)
{
  int v4; // eax

  if ( !*(_BYTE *)(this + 808) && a3 != *(_BYTE *)(this + 804) )
  {
    v4 = *(_DWORD *)(this + 800);
    if ( a3 == v4 || *(_DWORD *)(this + 804) == v4 )
    {
      DevMsg(2, "Player changed material to %d (was %d)\n", a3, *(_DWORD *)(this + 804));
      *(_DWORD *)(this + 804) = a3;
      sub_100EC3F0((_DWORD *)this, (int)sub_101318D0, 0.0, 0);
      sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
}
