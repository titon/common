<?hh // strict
/**
 * @copyright   2010-2015, The Titon Project
 * @license     http://opensource.org/licenses/bsd-license.php
 * @link        http://titon.io
 */

namespace Titon\Common;

/**
 * Interface for enabling to vector support.
 *
 * @package Titon\Common
 */
interface Vectorable<Tv> {

    /**
     * Return the object as a vector.
     *
     * @return Vector<Tv>
     */
    public function toVector(): Vector<Tv>;

}