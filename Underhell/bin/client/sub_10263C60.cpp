unsigned __int8 __thiscall sub_10263C60(int *this, char a2)
{
  unsigned __int8 result; // al
  int v4; // eax
  int v5; // ecx
  unsigned __int8 *v6; // ebp
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bl
  int v9; // edi
  unsigned __int8 *v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned __int8 v13; // [esp+7h] [ebp-1h] BYREF

  result = *((_BYTE *)this + 14);
  if ( result == 0xFF )
  {
    v4 = *((unsigned __int8 *)this + 16);
    v5 = this[1];
    v6 = (unsigned __int8 *)(this + 4);
    if ( v4 >= v5 )
    {
      v7 = (v5 > 0) - 1;
    }
    else if ( (unsigned __int8)(*v6 + 1) >= v5 )
    {
      v7 = -1;
    }
    else
    {
      v7 = *v6 + 1;
    }
    v13 = v7;
    v8 = v7;
    if ( v7 >= v5 )
    {
      sub_10261DB0(this, 1);
      v9 = this[1];
      if ( *v6 >= v9 )
      {
        v13 = (v9 > 0) - 1;
        v10 = &v13;
      }
      else
      {
        v10 = sub_10261CC0(this, &v13, (_BYTE *)this + 16);
      }
      v8 = *v10;
      if ( *v10 >= v9 )
        Error("CUtlLinkedList overflow!\n");
    }
    *v6 = v8;
    result = v8;
  }
  else
  {
    *((_BYTE *)this + 14) = *(_BYTE *)(*this + 72 * result + 69);
  }
  v11 = *this;
  v12 = 72 * result;
  if ( a2 )
  {
    *(_BYTE *)(v12 + v11 + 69) = -1;
    *(_BYTE *)(v12 + *this + 68) = -1;
  }
  else
  {
    *(_BYTE *)(v12 + v11 + 69) = result;
    *(_BYTE *)(v12 + *this + 68) = result;
  }
  this[5] = *this;
  return result;
}
