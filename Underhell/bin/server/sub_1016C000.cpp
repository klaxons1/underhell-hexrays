void __thiscall sub_1016C000(int this)
{
  int v2; // ebx
  int v3; // eax

  if ( *(_DWORD *)(this + 8) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 40))(this - 8);
    v2 = *(_DWORD *)(dword_106B31C8 + 24);
    if ( *(_DWORD *)(this + 52) < v2 && *(float *)(this + 12) >= 10.0 )
    {
      *(_DWORD *)(this + 52) = v2 + (int)(0.5 / *(float *)(dword_106B31C8 + 28) + 0.5);
      (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 44))(this - 8);
      (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 48))(this - 8);
    }
    v3 = *(_DWORD *)(this + 16);
    if ( v3 > 0 )
    {
      if ( *(_DWORD *)(this + 44) <= v3 )
        (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 12))(this - 8);
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 20))(this - 8);
    }
  }
}
