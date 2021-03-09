// Fig. 15.23: Fractal.java
// Demonstrates user interface for drawing a fractal.
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JColorChooser;

public class Fractal extends JFrame
{
   /**
    *
    */
   private static final long serialVersionUID = 1L;
   private final int WIDTH = 400; // define width of GUI
   private final int HEIGHT = 480; // define height of GUI
   private final int MIN_LEVEL = 0, MAX_LEVEL = 15;
   private Color color = Color.BLUE;

   private JButton changeColorJButton, increaseLevelJButton,
      decreaseLevelJButton;
   private JLabel levelJLabel;
   private FractalJPanel drawSpace;
   private JPanel mainJPanel, controlJPanel;

   // set up GUI
   public Fractal()
   {
      super( "Fractal" );

      // set up control panel
      controlJPanel = new JPanel();
      controlJPanel.setLayout( new FlowLayout() );

      // set up color button and register listener
      changeColorJButton = new JButton( "Color" );
      controlJPanel.add( changeColorJButton );
      changeColorJButton.addActionListener(
         new ActionListener() // anonymous inner class
         {
            // process changeColorJButton event
            public void actionPerformed( ActionEvent event )
            {
               color = JColorChooser.showDialog(
                  Fractal.this, "Choose a color", color );

               // set default color, if no color is returned
               if ( color == null )
                  color = Color.BLUE;

               drawSpace.setColor( color );		  
            } // end method actionPerformed
         } // end anonymous inner class
      ); // end addActionListener

      // set up decrease level button to add to control panel and 
      // register listener
      decreaseLevelJButton = new JButton( "Decrease Level" );
      controlJPanel.add( decreaseLevelJButton );
      decreaseLevelJButton.addActionListener(
         new ActionListener() // anonymous inner class
         {
            // process decreaseLevelJButton event
            public void actionPerformed( ActionEvent event )
            {
               int level = drawSpace.getLevel();
               level--; // decrease level by one

               // modify level if possible
               if ( ( level >= MIN_LEVEL ) &&
                  ( level <= MAX_LEVEL ) )
               {
                  levelJLabel.setText( "Level: " + level );
                  drawSpace.setLevel( level );
                  repaint(); 
               } // end if
            } // end method actionPerformed
         } // end anonymous inner class
      ); // end addActionListener

      // set up increase level button to add to control panel
      // and register listener
      increaseLevelJButton = new JButton( "Increase Level" );
      controlJPanel.add( increaseLevelJButton );
      increaseLevelJButton.addActionListener(
         new ActionListener() // anonymous inner class
         {
            // process increaseLevelJButton event
            public void actionPerformed( ActionEvent event )
            {
               int level = drawSpace.getLevel();
               level++; // increase level by one

               // modify level if possible
               if ( ( level >= MIN_LEVEL ) &&
                  ( level <= MAX_LEVEL ) )
               {
                  levelJLabel.setText( "Level: " + level );
                  drawSpace.setLevel( level );
                  repaint();
               } // end if
            } // end method actionPerformed
         } // end anonymous inner class
      ); // end addActionListener

      // set up levelJLabel to add to controlJPanel
      levelJLabel = new JLabel( "Level: 0" );
      controlJPanel.add( levelJLabel );

      drawSpace = new FractalJPanel( 0 );
 
      // create mainJPanel to contain controlJPanel and drawSpace
      mainJPanel = new JPanel();
      mainJPanel.add( controlJPanel );
      mainJPanel.add( drawSpace );

      add( mainJPanel ); // add JPanel to JFrame

      setSize( WIDTH, HEIGHT ); // set size of JFrame
      setVisible( true ); // display JFrame
   } // end constructor Fractal

   public static void main( String args[] )
   {
      Fractal demo = new Fractal();
      demo.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
   } // end main
} // end class Fractal

/*************************************************************************
* (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
* Pearson Education, Inc. All Rights Reserved.                           *
*                                                                        *
* DISCLAIMER: The authors and publisher of this book have used their     *
* best efforts in preparing the book. These efforts include the          *
* development, research, and testing of the theories and programs        *
* to determine their effectiveness. The authors and publisher make       *
* no warranty of any kind, expressed or implied, with regard to these    *
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or       *
* consequential damages in connection with, or arising out of, the       *
* furnishing, performance, or use of these programs.                     *
*************************************************************************/