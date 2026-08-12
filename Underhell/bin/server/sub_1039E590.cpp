void __thiscall sub_1039E590(_DWORD *this)
{
  int v2; // eax

  v2 = this[958];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v2);
    this[958] = 0;
  }
  sub_1010C110(dword_10614CA8, (int)this, "JoltVehicle");
  this[953] = -1;
}
