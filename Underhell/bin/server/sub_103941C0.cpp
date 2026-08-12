void __thiscall sub_103941C0(int this, int a2)
{
  int v3; // ecx
  float *v4; // eax

  sub_10092910(this, (float *)a2);
  if ( ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
     || (v3 = *(_DWORD *)(a2 + 424)) != 0 && ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3) & 4) != 0)
    && (*(_BYTE *)(this + 2716) & 1) == 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      sub_100347E0((float *)this, (float *)a2);
    }
    else if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v4 = (float *)sub_10261B20();
      sub_100347E0((float *)this, v4);
    }
    else
    {
      sub_100347E0((float *)this, 0);
    }
  }
}
