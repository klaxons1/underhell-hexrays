void __thiscall sub_10389D30(int this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-10h]

  *(float *)(this + 2740) = *(float *)(dword_106B31C8 + 12);
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      HIDWORD(v3) = this;
      LODWORD(v3) = this;
      sub_1010DD80((_DWORD *)(this + 4372), v3, 0.0);
      ++*(_DWORD *)(this + 4368);
    }
  }
}
