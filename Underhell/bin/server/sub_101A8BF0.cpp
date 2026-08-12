int *__thiscall sub_101A8BF0(_DWORD *this)
{
  int *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  result = (int *)sub_1002FB90((int)this);
  v3 = this[908];
  if ( v3 != -1 )
  {
    result = &off_1061BE18[4 * (this[908] & 0xFFF) + 1];
    v4 = v3 >> 12;
    if ( off_1061BE18[4 * (this[908] & 0xFFF) + 2] == v4 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (this[908] & 0xFFF) + 2] == v4 )
          result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)*result + 340))(*result);
        else
          result = (int *)(*(int (__thiscall **)(_DWORD))(MEMORY[0] + 340))(0);
        this[907] = result;
      }
    }
  }
  return result;
}
