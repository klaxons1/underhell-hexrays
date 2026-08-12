int __thiscall sub_1021F030(int *this)
{
  if ( (double)this[11] == 0.0 )
    return 0;
  else
    return 1 << (*(int (__thiscall **)(int *))(*this + 120))(this);
}
