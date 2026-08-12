pDNameNode *__thiscall pDNameNode::pDNameNode(pDNameNode *this, struct DName *a2)
{
  pDNameNode *result; // eax
  struct DName *v3; // ecx
  char v4; // dl

  result = this;
  v3 = a2;
  *(_DWORD *)result = &off_103B6918;
  if ( a2 )
  {
    v4 = *((_BYTE *)a2 + 4);
    if ( v4 == 2 || v4 == 3 )
      v3 = 0;
  }
  *((_DWORD *)result + 1) = v3;
  return result;
}
